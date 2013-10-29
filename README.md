cms_migrate
===========

POC for some "CMS"2"Drupal" migration, powered by migrate_d2d

## How to

In settings.php, don't forget to add : 

```
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => '<database_destination>',
      'username' => '<username>',
      'password' => '<password>',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
  'legacy' =>
    array (
      'default' =>
      array (
        'database' => '<database_source>',
        'username' => '<username>',
        'password' => '<password>',
        'host' => 'localhost',
        'port' => '',
        'driver' => 'mysql',
        'prefix' => '',
      ),
    ),
);
```

Then, migrate, code, and so on ... you should know ho to deal with it.
