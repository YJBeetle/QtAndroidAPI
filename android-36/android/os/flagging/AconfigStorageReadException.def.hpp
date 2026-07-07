#pragma once

#include "../../../java/lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace android::os::flagging
{
	class AconfigStorageReadException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jint ERROR_CANNOT_READ_STORAGE_FILE();
		static jint ERROR_CONTAINER_NOT_FOUND();
		static jint ERROR_GENERIC();
		static jint ERROR_PACKAGE_NOT_FOUND();
		static jint ERROR_STORAGE_SYSTEM_NOT_FOUND();
		
		// QJniObject forward
		template<typename ...Ts> explicit AconfigStorageReadException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		AconfigStorageReadException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		AconfigStorageReadException(jint arg0, JString arg1);
		AconfigStorageReadException(jint arg0, JThrowable arg1);
		AconfigStorageReadException(jint arg0, JString arg1, JThrowable arg2);
		
		// Methods
		jint getErrorCode() const;
		JString getMessage() const;
	};
} // namespace android::os::flagging

