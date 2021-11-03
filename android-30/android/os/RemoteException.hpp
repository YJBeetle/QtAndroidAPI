#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

namespace java::lang
{
	class RuntimeException;
}

namespace android::os
{
	class RemoteException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		RemoteException(QAndroidJniObject obj);
		
		// Constructors
		RemoteException();
		RemoteException(jstring arg0);
		
		// Methods
		java::lang::RuntimeException rethrowAsRuntimeException();
		java::lang::RuntimeException rethrowFromSystemServer();
	};
} // namespace android::os

