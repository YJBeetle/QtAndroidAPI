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
		static QAndroidJniObject ACTION_CREATE_LIVE_FOLDER();
		static QAndroidJniObject DESCRIPTION();
		static jint DISPLAY_MODE_GRID();
		static jint DISPLAY_MODE_LIST();
		static QAndroidJniObject EXTRA_LIVE_FOLDER_BASE_INTENT();
		static QAndroidJniObject EXTRA_LIVE_FOLDER_DISPLAY_MODE();
		static QAndroidJniObject EXTRA_LIVE_FOLDER_ICON();
		static QAndroidJniObject EXTRA_LIVE_FOLDER_NAME();
		static QAndroidJniObject ICON_BITMAP();
		static QAndroidJniObject ICON_PACKAGE();
		static QAndroidJniObject ICON_RESOURCE();
		static QAndroidJniObject INTENT();
		static QAndroidJniObject NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject LiveFolders::ACTION_CREATE_LIVE_FOLDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ACTION_CREATE_LIVE_FOLDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"DESCRIPTION",
			"Ljava/lang/String;");
	}
	jint LiveFolders::DISPLAY_MODE_GRID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.LiveFolders",
			"DISPLAY_MODE_GRID");
	}
	jint LiveFolders::DISPLAY_MODE_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.LiveFolders",
			"DISPLAY_MODE_LIST");
	}
	QAndroidJniObject LiveFolders::EXTRA_LIVE_FOLDER_BASE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_BASE_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::EXTRA_LIVE_FOLDER_DISPLAY_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_DISPLAY_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::EXTRA_LIVE_FOLDER_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_ICON",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::EXTRA_LIVE_FOLDER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::ICON_BITMAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_BITMAP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::ICON_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_PACKAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::ICON_RESOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_RESOURCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LiveFolders::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.LiveFolders",
			"NAME",
			"Ljava/lang/String;");
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

