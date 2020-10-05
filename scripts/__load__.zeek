#
# This is loaded automatically at Zeek startup once the plugin gets activated
# and its BiF elements have become available. Include code here that should
# always execute unconditionally at that time. 
# 
# Note that often you may want your plugin's accompanying scripts not here, but
# in scripts/<plugin-namespace>/<plugin-name>/__load__.zeek. That's processed
# only on explicit `@load <plugin-namespace>/<plugin-name>`.
#
module Napatech;

export {
    ## Should the plugin try to deduplicate packets with the color1
    ## value of the DYN4 packet descriptor?
    const enable_software_deduplication = T &redef;
    ## The size of the software deduplication lru cache
    const dedupe_lru_size = 1024 &redef;
    ## Because applications can share streams, the Host Buffer Allowance
    ## allows an application to consume a portion of the host buffer
    ## before the application stops receiving traffic.
    ## For Bro, you most likely want to set this to 100
    const host_buffer_allowance = 100 &redef;
}
