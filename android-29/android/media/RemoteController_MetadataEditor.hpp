#pragma once

#ifndef ANDROID_MEDIA_REMOTECONTROLLER_METADATAEDITOR
#define ANDROID_MEDIA_REMOTECONTROLLER_METADATAEDITOR

#include "../../__JniBaseClass.hpp"
#include "MediaMetadataEditor.hpp"

namespace __jni_impl::android::media
{
	class RemoteController;
}

namespace __jni_impl::android::media
{
	class RemoteController_MetadataEditor : public __jni_impl::android::media::MediaMetadataEditor
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void apply();
	};
} // namespace __jni_impl::android::media

#include "RemoteController.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void RemoteController_MetadataEditor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteController$MetadataEditor",
			"(V)V");
	}
	
	// Methods
	void RemoteController_MetadataEditor::apply()
	{
		__thiz.callMethod<void>(
			"apply",
			"()V"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class RemoteController_MetadataEditor : public __jni_impl::android::media::RemoteController_MetadataEditor
	{
	public:
		RemoteController_MetadataEditor(QAndroidJniObject obj) { __thiz = obj; }
		RemoteController_MetadataEditor()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_REMOTECONTROLLER_METADATAEDITOR

