#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./AconfigStorageReadException.def.hpp"

namespace android::os::flagging
{
	// Fields
	inline jint AconfigStorageReadException::ERROR_CANNOT_READ_STORAGE_FILE()
	{
		return getStaticField<jint>(
			"android.os.flagging.AconfigStorageReadException",
			"ERROR_CANNOT_READ_STORAGE_FILE"
		);
	}
	inline jint AconfigStorageReadException::ERROR_CONTAINER_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.os.flagging.AconfigStorageReadException",
			"ERROR_CONTAINER_NOT_FOUND"
		);
	}
	inline jint AconfigStorageReadException::ERROR_GENERIC()
	{
		return getStaticField<jint>(
			"android.os.flagging.AconfigStorageReadException",
			"ERROR_GENERIC"
		);
	}
	inline jint AconfigStorageReadException::ERROR_PACKAGE_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.os.flagging.AconfigStorageReadException",
			"ERROR_PACKAGE_NOT_FOUND"
		);
	}
	inline jint AconfigStorageReadException::ERROR_STORAGE_SYSTEM_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.os.flagging.AconfigStorageReadException",
			"ERROR_STORAGE_SYSTEM_NOT_FOUND"
		);
	}
	
	// Constructors
	inline AconfigStorageReadException::AconfigStorageReadException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.os.flagging.AconfigStorageReadException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline AconfigStorageReadException::AconfigStorageReadException(jint arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.os.flagging.AconfigStorageReadException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1.object<jthrowable>()
		) {}
	inline AconfigStorageReadException::AconfigStorageReadException(jint arg0, JString arg1, JThrowable arg2)
		: java::lang::RuntimeException(
			"android.os.flagging.AconfigStorageReadException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline jint AconfigStorageReadException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline JString AconfigStorageReadException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os::flagging

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::flagging;
#endif
