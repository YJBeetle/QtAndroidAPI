#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::tv
{
	class TvContract_Channels_Logo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media::tv


namespace __jni_impl::android::media::tv
{
	// Fields
	jstring TvContract_Channels_Logo::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels$Logo",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void TvContract_Channels_Logo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract$Channels$Logo",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContract_Channels_Logo : public __jni_impl::android::media::tv::TvContract_Channels_Logo
	{
	public:
		TvContract_Channels_Logo(QAndroidJniObject obj) { __thiz = obj; }
		TvContract_Channels_Logo()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

