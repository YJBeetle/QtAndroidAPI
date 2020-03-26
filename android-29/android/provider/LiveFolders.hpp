#pragma once

#ifndef ANDROID_PROVIDER_LIVEFOLDERS
#define ANDROID_PROVIDER_LIVEFOLDERS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class LiveFolders : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CREATE_LIVE_FOLDER();
		static jstring DESCRIPTION();
		static jint DISPLAY_MODE_GRID();
		static jint DISPLAY_MODE_LIST();
		static jstring EXTRA_LIVE_FOLDER_BASE_INTENT();
		static jstring EXTRA_LIVE_FOLDER_DISPLAY_MODE();
		static jstring EXTRA_LIVE_FOLDER_ICON();
		static jstring EXTRA_LIVE_FOLDER_NAME();
		static jstring ICON_BITMAP();
		static jstring ICON_PACKAGE();
		static jstring ICON_RESOURCE();
		static jstring INTENT();
		static jstring NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring LiveFolders::ACTION_CREATE_LIVE_FOLDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ACTION_CREATE_LIVE_FOLDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint LiveFolders::DISPLAY_MODE_GRID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.LiveFolders",
			"DISPLAY_MODE_GRID"
		);
	}
	jint LiveFolders::DISPLAY_MODE_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.LiveFolders",
			"DISPLAY_MODE_LIST"
		);
	}
	jstring LiveFolders::EXTRA_LIVE_FOLDER_BASE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_BASE_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::EXTRA_LIVE_FOLDER_DISPLAY_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_DISPLAY_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::EXTRA_LIVE_FOLDER_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::EXTRA_LIVE_FOLDER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::ICON_BITMAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_BITMAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::ICON_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::ICON_RESOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_RESOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LiveFolders::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void LiveFolders::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.LiveFolders",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class LiveFolders : public __jni_impl::android::provider::LiveFolders
	{
	public:
		LiveFolders(QAndroidJniObject obj) { __thiz = obj; }
		LiveFolders()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_LIVEFOLDERS

