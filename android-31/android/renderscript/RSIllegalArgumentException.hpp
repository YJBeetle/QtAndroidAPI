#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"


namespace android::renderscript
{
	class RSIllegalArgumentException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSIllegalArgumentException(const char *className, const char *sig, Ts...agv) : android::renderscript::RSRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RSIllegalArgumentException(QAndroidJniObject obj);
		
		// Constructors
		RSIllegalArgumentException(jstring arg0);
		
		// Methods
	};
} // namespace android::renderscript

