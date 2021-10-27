#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MediaMetadataEditor.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::media
{
	class MediaMetadataEditor;
}
namespace __jni_impl::android::media
{
	class RemoteControlClient;
}

namespace __jni_impl::android::media
{
	class RemoteControlClient_MetadataEditor : public __jni_impl::android::media::MediaMetadataEditor
	{
	public:
		// Fields
		static jint BITMAP_KEY_ARTWORK();
		
		// Constructors
		void __constructor();
		
		// Methods
		void apply();
		void clear();
		jobject clone();
		QAndroidJniObject putBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1);
		QAndroidJniObject putLong(jint arg0, jlong arg1);
		QAndroidJniObject putObject(jint arg0, jobject arg1);
		QAndroidJniObject putString(jint arg0, jstring arg1);
		QAndroidJniObject putString(jint arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap.hpp"
#include "./MediaMetadataEditor.hpp"
#include "./RemoteControlClient.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint RemoteControlClient_MetadataEditor::BITMAP_KEY_ARTWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient$MetadataEditor",
			"BITMAP_KEY_ARTWORK"
		);
	}
	
	// Constructors
	void RemoteControlClient_MetadataEditor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteControlClient$MetadataEditor",
			"(V)V");
	}
	
	// Methods
	void RemoteControlClient_MetadataEditor::apply()
	{
		__thiz.callMethod<void>(
			"apply",
			"()V"
		);
	}
	void RemoteControlClient_MetadataEditor::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject RemoteControlClient_MetadataEditor::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject RemoteControlClient_MetadataEditor::putBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"putBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteControlClient_MetadataEditor::putLong(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(IJ)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RemoteControlClient_MetadataEditor::putObject(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putObject",
			"(ILjava/lang/Object;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RemoteControlClient_MetadataEditor::putString(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RemoteControlClient_MetadataEditor::putString(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class RemoteControlClient_MetadataEditor : public __jni_impl::android::media::RemoteControlClient_MetadataEditor
	{
	public:
		RemoteControlClient_MetadataEditor(QAndroidJniObject obj) { __thiz = obj; }
		RemoteControlClient_MetadataEditor()
		{
			__constructor();
		}
	};
} // namespace android::media

