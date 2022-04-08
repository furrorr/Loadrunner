#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "{\"id\":1,\"result\":{\"client\":\"23f6e16e-9d9e-487b-9468-66e60d51c045\",\"vers"
                        "ion\":\"3.1.1\",\"expires\":true,\"ttl\":86376}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 112 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "{\"id\":2,\"result\":{\"recoverable\":true,\"epoch\":\"ikZv\",\"offset\":13,\"po"
                        "sitioned\":true}}\n"
                        "{\"id\":3,\"result\":{\"recoverable\":true,\"epoch\":\"nSIo\",\"positioned\":tru"
                        "e}}\n"
                        "{\"id\":4,\"result\":{\"recoverable\":true,\"epoch\":\"YLNy\",\"positioned\":tru"
                        "e}}";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 227 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive2[] = "{\"result\":{\"type\":1,\"channel\":\"service_message_islru-10025887#4f759bb2-9c"
                        "7b-11ec-be2d-a2db6aabc0b6\",\"data\":{\"info\":{\"user\":\"4f759bb2-9c7b-11ec-be"
                        "2d-a2db6aabc0b6\",\"client\":\"23f6e16e-9d9e-487b-9468-66e60d51c045\"}}}}";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	// (record-time: 213 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive3[] = "{\"result\":{\"type\":1,\"channel\":\"user_messages_islru-10025887#4f759bb2-9c7b"
                        "-11ec-be2d-a2db6aabc0b6\",\"data\":{\"info\":{\"user\":\"4f759bb2-9c7b-11ec-be2d"
                        "-a2db6aabc0b6\",\"client\":\"23f6e16e-9d9e-487b-9468-66e60d51c045\"}}}}";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	// (record-time: 211 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive4[] = "{\"id\":1,\"result\":{\"client\":\"aecbdccc-64c7-4b01-9f9b-b530c68796a1\",\"vers"
                        "ion\":\"3.1.1\",\"expires\":true,\"ttl\":86362}}";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	// (record-time: 112 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive5[] = "{\"id\":2,\"result\":{\"recoverable\":true,\"epoch\":\"ikZv\",\"offset\":13,\"po"
                        "sitioned\":true}}\n"
                        "{\"id\":3,\"result\":{\"recoverable\":true,\"epoch\":\"nSIo\",\"positioned\":tru"
                        "e}}";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	// (record-time: 155 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive6[] = "{\"result\":{\"type\":1,\"channel\":\"user_notification_islru-10025887#4f759bb2-"
                        "9c7b-11ec-be2d-a2db6aabc0b6\",\"data\":{\"info\":{\"user\":\"4f759bb2-9c7b-11ec-"
                        "be2d-a2db6aabc0b6\",\"client\":\"23f6e16e-9d9e-487b-9468-66e60d51c045\"}}}}";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	// (record-time: 215 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive7[] = "{\"id\":4,\"result\":{\"recoverable\":true,\"epoch\":\"YLNy\",\"positioned\":tru"
                        "e}}";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	// (record-time: 71 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive8[] = "{\"result\":{\"type\":1,\"channel\":\"service_message_islru-10025887#4f759bb2-9c"
                        "7b-11ec-be2d-a2db6aabc0b6\",\"data\":{\"info\":{\"user\":\"4f759bb2-9c7b-11ec-be"
                        "2d-a2db6aabc0b6\",\"client\":\"aecbdccc-64c7-4b01-9f9b-b530c68796a1\"}}}}\n"
                        "{\"result\":{\"type\":1,\"channel\":\"user_notification_islru-10025887#4f759bb2-"
                        "9c7b-11ec-be2d-a2db6aabc0b6\",\"data\":{\"info\":{\"user\":\"4f759bb2-9c7b-11ec-"
                        "be2d-a2db6aabc0b6\",\"client\":\"aecbdccc-64c7-4b01-9f9b-b530c68796a1\"}}}}";
long WebSocketReceiveLen8   = sizeof(WebSocketReceive8) - 1;	// (record-time: 429 bytes)

#endif
