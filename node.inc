<?php

/**
 * Common mappings for the Drupal 7 node migrations.
 */
abstract class CmsMigrateNodeMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

//     $this->addFieldMapping('nid', 'nid')
//         ->description('We have a common field to save the D7 nid');
  }
}

/**
 * Image-specific mappings and handling.
 */
class BannerMigration extends CmsMigrateNodeMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_banner_subtitle', 'field_banner_subtitle');
    $this->addSimpleMappings(array(
        'field_banner_cta',
        'field_banner_cta:title',
        'field_banner_img_teaser',
        'field_banner_image',
        'language',
        'metatag_title',
      )
    );
  }

  function prepareRow($row) {
    parent::prepareRow($row);

//    print_r($row);
  }
}
