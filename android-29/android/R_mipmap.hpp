#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_mipmap : public __JniBaseClass
	{
	public:
		// Fields
		static jint sym_def_app_icon();
		
		R_mipmap(QAndroidJniObject obj);
		// Constructors
		R_mipmap();
		
		// Methods
	};
} // namespace android

