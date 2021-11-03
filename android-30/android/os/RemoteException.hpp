#pragma once

#include "../util/AndroidException.hpp"

namespace java::lang
{
	class RuntimeException;
}
class JString;

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
		RemoteException(JString arg0);
		
		// Methods
		java::lang::RuntimeException rethrowAsRuntimeException() const;
		java::lang::RuntimeException rethrowFromSystemServer() const;
	};
} // namespace android::os

