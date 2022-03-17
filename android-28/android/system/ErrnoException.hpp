#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ErrnoException.def.hpp"

namespace android::system
{
	// Fields
	inline jint ErrnoException::errno_()
	{
		return getField<jint>(
			"errno"
		);
	}
	
	// Constructors
	inline ErrnoException::ErrnoException(JString arg0, jint arg1)
		: java::lang::Exception(
			"android.system.ErrnoException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline ErrnoException::ErrnoException(JString arg0, jint arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.system.ErrnoException",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline JString ErrnoException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::system;
#endif
