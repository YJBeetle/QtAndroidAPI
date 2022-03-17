#pragma once

#include "../util/AndroidException.def.hpp"

class JString;

namespace android::os
{
	class RemoteException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		RemoteException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
		
		// Constructors
		RemoteException();
		RemoteException(JString arg0);
		
		// Methods
	};
} // namespace android::os

