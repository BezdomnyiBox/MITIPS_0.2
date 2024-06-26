-- MySQL Script generated by MySQL Workbench
-- Mon Apr 15 07:22:56 2024
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema db_ontology
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema db_ontology
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `db_ontology` DEFAULT CHARACTER SET utf8 ;
USE `db_ontology` ;

-- -----------------------------------------------------
-- Table `db_ontology`.`users`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `db_ontology`.`users` (
  `user_name` VARCHAR(45) NOT NULL,
  `user_password` VARCHAR(45) NULL,
  `user_speciality` VARCHAR(45) NULL,
  PRIMARY KEY (`user_name`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `db_ontology`.`diseases`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `db_ontology`.`diseases` (
  `disease_id` INT NOT NULL,
  `disease_name` VARCHAR(45) NULL,
  PRIMARY KEY (`disease_id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `db_ontology`.`features`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `db_ontology`.`features` (
  `feature_id` INT NOT NULL,
  `feature_name` VARCHAR(45) NULL,
  `diseases_disease_id` INT NOT NULL,
  PRIMARY KEY (`feature_id`),
  INDEX `fk_features_diseases1_idx` (`diseases_disease_id` ASC) VISIBLE,
  CONSTRAINT `fk_features_diseases1`
    FOREIGN KEY (`diseases_disease_id`)
    REFERENCES `db_ontology`.`diseases` (`disease_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `db_ontology`.`disease_values`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `db_ontology`.`disease_values` (
  `disease_value_id` INT NOT NULL,
  `disease_value` VARCHAR(45) NULL,
  `features_feature_id` INT NOT NULL,
  PRIMARY KEY (`disease_value_id`),
  INDEX `fk_disease_values_features_idx` (`features_feature_id` ASC) VISIBLE,
  CONSTRAINT `fk_disease_values_features`
    FOREIGN KEY (`features_feature_id`)
    REFERENCES `db_ontology`.`features` (`feature_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
