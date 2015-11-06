#ifndef ADCEventTags_H
#define ADCEventTags_H

// Version in use

#define ADCEVENT_FORMAT_VERSION 2

// Tags position and definitions

#define ADCEVENT_TAG_LIN 0
#define ADCEVENT_TAG_POS 28
#define ADCEVENT_TAG_BIT 0xF0000000

#define ADCEVENT_FHEAD_TAG 0x9
#define ADCEVENT_FTAIL_TAG 0x5
#define ADCEVENT_EVENT_TAG 0xE

// File header structure

#define ADCEVENT_FHEAD_LEN 3

#define ADCEVENT_VERSION_LIN 0
#define ADCEVENT_VERSION_POS 16
#define ADCEVENT_VERSION_BIT 0x0FFF0000

#define ADCEVENT_FILEINDEX_LIN 0
#define ADCEVENT_FILEINDEX_POS 0
#define ADCEVENT_FILEINDEX_BIT 0x0000FFFF

#define ADCEVENT_RUNNUMBER_LIN 1
#define ADCEVENT_RUNNUMBER_POS 0
#define ADCEVENT_RUNNUMBER_BIT 0xFFFFFFFF

#define ADCEVENT_TTAGSOF_LIN 2
#define ADCEVENT_TTAGSOF_POS 0
#define ADCEVENT_TTAGSOF_BIT 0xFFFFFFFF

// File tail structure

#define ADCEVENT_FTAIL_LEN 4

#define ADCEVENT_NEVENTS_LIN 0
#define ADCEVENT_NEVENTS_POS 0
#define ADCEVENT_NEVENTS_BIT 0x0FFFFFFF

#define ADCEVENT_FILESIZELO_LIN 1
#define ADCEVENT_FILESIZELO_POS 0
#define ADCEVENT_FILESIZELO_BIT 0x0FFFFFFF

#define ADCEVENT_FILESIZEHI_LIN 2
#define ADCEVENT_FILESIZEHI_POS 0
#define ADCEVENT_FILESIZEHI_BIT 0x0FFFFFFF

#define ADCEVENT_TTAGEOF_LIN 3
#define ADCEVENT_TTAGEOF_POS 0
#define ADCEVENT_TTAGEOF_BIT 0xFFFFFFFF

// Event header structure

#define ADCEVENT_EVENTHEAD_LEN 6

#define ADCEVENT_EVENTSIZE_LIN 0
#define ADCEVENT_EVENTSIZE_POS 0
#define ADCEVENT_EVENTSIZE_BIT 0x0FFFFFFF

#define ADCEVENT_BOARDID_LIN 1
#define ADCEVENT_BOARDID_POS 24
#define ADCEVENT_BOARDID_BIT 0xFF000000

#define ADCEVENT_PATTERN_LIN 1
#define ADCEVENT_PATTERN_POS 8
#define ADCEVENT_PATTERN_BIT 0x003FFF00

#define ADCEVENT_STATUS_LIN 1
#define ADCEVENT_STATUS_POS 4
#define ADCEVENT_STATUS_BIT 0x000000F0

#define ADCEVENT_GRMASK_LIN 1
#define ADCEVENT_GRMASK_POS 0
#define ADCEVENT_GRMASK_BIT 0x0000000F

#define ADCEVENT_EVENTNUMBER_LIN 2
#define ADCEVENT_EVENTNUMBER_POS 0
#define ADCEVENT_EVENTNUMBER_BIT 0x003FFFFF

#define ADCEVENT_TTAGEVENT_LIN 3
#define ADCEVENT_TTAGEVENT_POS 0
#define ADCEVENT_TTAGEVENT_BIT 0xFFFFFFFF

#define ADCEVENT_CHMASKACTIVE_LIN 4
#define ADCEVENT_CHMASKACTIVE_POS 0
#define ADCEVENT_CHMASKACTIVE_BIT 0xFFFFFFFF

#define ADCEVENT_CHMASKACCEPTED_LIN 5
#define ADCEVENT_CHMASKACCEPTED_POS 0
#define ADCEVENT_CHMASKACCEPTED_BIT 0xFFFFFFFF

// Group header structure

#define ADCEVENT_GRHEAD_LEN 1

#define ADCEVENT_STARTIDXCELL_LIN 0
#define ADCEVENT_STARTIDXCELL_POS 16
#define ADCEVENT_STARTIDXCELL_BIT 0xFFFF0000

#define ADCEVENT_FREQUENCY_LIN 0
#define ADCEVENT_FREQUENCY_POS 14
#define ADCEVENT_FREQUENCY_BIT 0x0000C000

#define ADCEVENT_TRHASDATA_LIN 0
#define ADCEVENT_TRHASDATA_POS 12
#define ADCEVENT_TRHASDATA_BIT 0x00003000

#define ADCEVENT_GRSIZE_LIN 0
#define ADCEVENT_GRSIZE_POS 0
#define ADCEVENT_GRSIZE_BIT 0x00000FFF

// Group tail structure

#define ADCEVENT_GRTAIL_LEN 1

#define ADCEVENT_TTAGTRIG_LIN 0
#define ADCEVENT_TTAGTRIG_POS 0
#define ADCEVENT_TTAGTRIG_BIT 0xFFFFFFFF

// Definitions for array sizes

#define ADCEVENT_NCHANNELS 32
#define ADCEVENT_NTRIGGERS 4
#define ADCEVENT_NSAMPLES 1024

// Define max event size (in words)

# define ADCEVENT_MAXEVENT_LEN ADCEVENT_EVENTHEAD_LEN+ADCEVENT_NTRIGGERS*(ADCEVENT_GRHEAD_LEN+ADCEVENT_NSAMPLES/2+ADCEVENT_GRTAIL_LEN)+ADCEVENT_NCHANNELS*ADCEVENT_NSAMPLES/2

#endif
