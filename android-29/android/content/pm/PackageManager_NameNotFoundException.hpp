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
		
		PackageManager_NameNotFoundException(QAndroidJniObject obj);
		// Constructors
		PackageManager_NameNotFoundException();
		PackageManager_NameNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace android::content::pm

