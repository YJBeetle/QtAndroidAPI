#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../util/AndroidException.hpp"


namespace android::content::pm
{
	class PackageManager_NameNotFoundException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageManager_NameNotFoundException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_NameNotFoundException(QAndroidJniObject obj);
		
		// Constructors
		PackageManager_NameNotFoundException();
		PackageManager_NameNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace android::content::pm

