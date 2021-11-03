#include "../../JIntArray.hpp"
#include "../graphics/Bitmap.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaMetadataEditor.hpp"

namespace android::media
{
	// Fields
	jint MediaMetadataEditor::BITMAP_KEY_ARTWORK()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"BITMAP_KEY_ARTWORK"
		);
	}
	jint MediaMetadataEditor::RATING_KEY_BY_OTHERS()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_OTHERS"
		);
	}
	jint MediaMetadataEditor::RATING_KEY_BY_USER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_USER"
		);
	}
	
	// QAndroidJniObject forward
	MediaMetadataEditor::MediaMetadataEditor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaMetadataEditor::addEditableKey(jint arg0)
	{
		callMethod<void>(
			"addEditableKey",
			"(I)V",
			arg0
		);
	}
	void MediaMetadataEditor::apply()
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
	void MediaMetadataEditor::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::graphics::Bitmap MediaMetadataEditor::getBitmap(jint arg0, android::graphics::Bitmap arg1)
	{
		return callObjectMethod(
			"getBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.object()
		);
	}
	JIntArray MediaMetadataEditor::getEditableKeys()
	{
		return callObjectMethod(
			"getEditableKeys",
			"()[I"
		);
	}
	jlong MediaMetadataEditor::getLong(jint arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	JObject MediaMetadataEditor::getObject(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"getObject",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	JString MediaMetadataEditor::getString(jint arg0, JString arg1)
	{
		return callObjectMethod(
			"getString",
			"(ILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1.object<jstring>()
		);
	}
	android::media::MediaMetadataEditor MediaMetadataEditor::putBitmap(jint arg0, android::graphics::Bitmap arg1)
	{
		return callObjectMethod(
			"putBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.object()
		);
	}
	android::media::MediaMetadataEditor MediaMetadataEditor::putLong(jint arg0, jlong arg1)
	{
		return callObjectMethod(
			"putLong",
			"(IJ)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1
		);
	}
	android::media::MediaMetadataEditor MediaMetadataEditor::putObject(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"putObject",
			"(ILjava/lang/Object;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.object<jobject>()
		);
	}
	android::media::MediaMetadataEditor MediaMetadataEditor::putString(jint arg0, JString arg1)
	{
		return callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.object<jstring>()
		);
	}
	void MediaMetadataEditor::removeEditableKeys()
	{
		callMethod<void>(
			"removeEditableKeys",
			"()V"
		);
	}
} // namespace android::media

