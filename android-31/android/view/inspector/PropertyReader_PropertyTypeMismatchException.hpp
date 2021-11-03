#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace android::view::inspector
{
	class PropertyReader_PropertyTypeMismatchException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyReader_PropertyTypeMismatchException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		PropertyReader_PropertyTypeMismatchException(QAndroidJniObject obj);
		
		// Constructors
		PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2);
		PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2, jstring arg3);
		
		// Methods
	};
} // namespace android::view::inspector

