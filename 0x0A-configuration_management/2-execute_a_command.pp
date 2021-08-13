# Execute pkill command
exec { 'kill killemenow process':
  command  => 'pkill -f killmenow',
  provider => 'shell'
}
