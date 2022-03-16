#include "../graphics/Bitmap.hpp"
#include "./MediaMetadataEditor.hpp"
#include "./RemoteControlClient.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// Constructors
	
	// Methods
	void RemoteControlClient_MetadataEditor::apply() const
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
	void RemoteControlClient_MetadataEditor::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject RemoteControlClient_MetadataEditor::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putBitmap(jint arg0, android::graphics::Bitmap arg1) const
	{
		return callObjectMethod(
			"putBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1.object()
		);
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putLong(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"putLong",
			"(IJ)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1
		);
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putObject(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putObject",
			"(ILjava/lang/Object;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1.object<jobject>()
		);
	}
	android::media::RemoteControlClient_MetadataEditor RemoteControlClient_MetadataEditor::putString(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::media

