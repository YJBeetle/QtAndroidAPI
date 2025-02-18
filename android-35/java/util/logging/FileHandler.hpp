#pragma once

#include "../../../JArray.hpp"
#include "../../io/File.def.hpp"
#include "../../../JString.hpp"
#include "../../nio/channels/FileChannel.def.hpp"
#include "./LogRecord.def.hpp"
#include "./FileHandler.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline FileHandler::FileHandler()
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"()V"
		) {}
	inline FileHandler::FileHandler(JString arg0)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FileHandler::FileHandler(JString arg0, jboolean arg1)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline FileHandler::FileHandler(JString arg0, jint arg1, jint arg2)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	inline FileHandler::FileHandler(JString arg0, jint arg1, jint arg2, jboolean arg3)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;IIZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		) {}
	inline FileHandler::FileHandler(JString arg0, jlong arg1, jint arg2, jboolean arg3)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;JIZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline void FileHandler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void FileHandler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers
#include "./Handler.hpp"
#include "./StreamHandler.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::logging;
#endif
