#pragma once

#include "../../JString.hpp"
#include "./TagLostException.def.hpp"

namespace android::nfc
{
	// Fields
	
	// Constructors
	inline TagLostException::TagLostException()
		: java::io::IOException(
			"android.nfc.TagLostException",
			"()V"
		) {}
	inline TagLostException::TagLostException(JString arg0)
		: java::io::IOException(
			"android.nfc.TagLostException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::nfc

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

