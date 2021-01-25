#ifndef __MP_STATUS_H__
#define __MP_STATUS_H__

typedef enum {
	MP_SUCCESS = 0,
	MP_NOT_IMPLEMENTED_YET,
	MP_GENERAL_ERR,
	MP_SIP_INIT_ERR,
	MP_SIP_DESTROY_ERR,
	MP_INPUT_ERR,
	MP_SET_REGISTRATION_ERR,
	MP_STATUS_ERR,
	MP_ANSWER_CALL = 200, // Accept call
	MP_REJECT_CALL = 486, // Busy here
	MP_RING_CALL = 180, // Ring
	MP_MESSAGE_SENT,
	MP_MESSAGE_NOT_SENT,
} mp_status_t;

#endif /* __MP_STATUS_H__ */
