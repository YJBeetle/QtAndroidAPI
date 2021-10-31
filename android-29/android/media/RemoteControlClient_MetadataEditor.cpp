#include "../graphics/Bitmap.hpp"
#include "./MediaMetadataEditor.hpp"
#include "./RemoteControlClient.hpp"
#include "./RemoteControlClient_MetadataEditor.hpp"

namespace android::media
{
	// Fields
	jint RemoteControlClient_MetadataEditor::BITMAP_KEY_ARTWORK()
	{
		return getStaticField<jint>(
			"android.media.RemoteControlClient$MetadataEditor",
			"BITMAP_KEY_ARTWORK"
		);
	}
	
	// QAndroidJniObject forward
	RemoteControlClient_MetadataEditor::RemoteControlClient_MetadataEditor(QAndroidJniObject obj) : android::media::MediaMetadataEditor(obj) {}
	
	// Constructors
	
	// Methods
	void RemoteControlClient_MetadataEditor::apply()
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
	void RemoteControlClient_MetadataEditor::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject RemoteControlClient_MetadataEditor::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putBitmap(jint arg0, android::graphics::Bitmap arg1)
	{
		return callObjectMethod(
			"putBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1.object()
		);
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putLong(jint arg0, jlong arg1)
	{
		return callObjectMethod(
			"putLong",
			"(IJ)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1
		);
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putObject(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"putObject",
			"(ILjava/lang/Object;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1
		);
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putString(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1
		);
	}
} // namespace android::media

