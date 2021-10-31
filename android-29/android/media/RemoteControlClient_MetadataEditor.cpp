#include "../graphics/Bitmap.hpp"
#include "./MediaMetadataEditor.hpp"
#include "./RemoteControlClient.hpp"
#include "./RemoteControlClient_MetadataEditor.hpp"

namespace android::media
{
	// Fields
	jint RemoteControlClient_MetadataEditor::BITMAP_KEY_ARTWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient$MetadataEditor",
			"BITMAP_KEY_ARTWORK"
		);
	}
	
	RemoteControlClient_MetadataEditor::RemoteControlClient_MetadataEditor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	QAndroidJniObject RemoteControlClient_MetadataEditor::putBitmap(jint arg0, android::graphics::Bitmap arg1)
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
} // namespace android::media

