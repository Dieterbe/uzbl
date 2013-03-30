#ifndef UZBL_EVENTS_H
#define UZBL_EVENTS_H

#include <glib.h>

#define UZBL_EVENTS(call)       \
    call (LOAD_START),          \
    call (LOAD_COMMIT),         \
    call (LOAD_FINISH),         \
    call (LOAD_ERROR),          \
    call (REQUEST_QUEUED),      \
    call (REQUEST_STARTING),    \
    call (REQUEST_FINISHED),    \
    call (KEY_PRESS),           \
    call (KEY_RELEASE),         \
    call (MOD_PRESS),           \
    call (MOD_RELEASE),         \
    call (COMMAND_EXECUTED),    \
    call (LINK_HOVER),          \
    call (TITLE_CHANGED),       \
    call (GEOMETRY_CHANGED),    \
    call (WEBINSPECTOR),        \
    call (NEW_WINDOW),          \
    call (CLOSE_WINDOW),        \
    call (SELECTION_CHANGED),   \
    call (VARIABLE_SET),        \
    call (FIFO_SET),            \
    call (SOCKET_SET),          \
    call (INSTANCE_START),      \
    call (INSTANCE_EXIT),       \
    call (LOAD_PROGRESS),       \
    call (LINK_UNHOVER),        \
    call (FORM_ACTIVE),         \
    call (ROOT_ACTIVE),         \
    call (FOCUS_LOST),          \
    call (FOCUS_GAINED),        \
    call (FILE_INCLUDED),       \
    call (PLUG_CREATED),        \
    call (COMMAND_ERROR),       \
    call (BUILTINS),            \
    call (SCROLL_VERT),         \
    call (SCROLL_HORIZ),        \
    call (DOWNLOAD_STARTED),    \
    call (DOWNLOAD_PROGRESS),   \
    call (DOWNLOAD_ERROR),      \
    call (DOWNLOAD_COMPLETE),   \
    call (ADD_COOKIE),          \
    call (DELETE_COOKIE),       \
    call (FOCUS_ELEMENT),       \
    call (BLUR_ELEMENT),        \
    call (AUTHENTICATE),        \
    call (WEB_PROCESS_CRASHED), \
    call (USER_EVENT),          \
    /* Must be last entry. */   \
    call (LAST_EVENT)

/* Event table. */
typedef enum {
/* TODO: Namespace event enum values. */
#define event_enum(evt) evt

    UZBL_EVENTS (event_enum)

#undef event_enum
} UzblEventType;

int
uzbl_events_init ();

void
uzbl_events_replay_buffer ();

void
uzbl_events_send (UzblEventType type, const gchar *custom_event, ...) G_GNUC_NULL_TERMINATED;

#endif
