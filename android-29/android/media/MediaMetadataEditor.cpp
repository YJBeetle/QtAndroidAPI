#include "../graphics/Bitmap.hpp"
#include "./MediaMetadataEditor.hpp"

namespace android::media
{
	// Fields
	jint MediaMetadataEditor::BITMAP_KEY_ARTWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"BITMAP_KEY_ARTWORK"
		);
	}
	jint MediaMetadataEditor::RATING_KEY_BY_OTHERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_OTHERS"
		);
	}
	jint MediaMetadataEditor::RATING_KEY_BY_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_USER"
		);
	}
	
	MediaMetadataEditor::MediaMetadataEditor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaMetadataEditor::addEditableKey(jint arg0)
	{
		__thiz.callMethod<void>(
			"addEditableKey",
			"(I)V",
			arg0
		);
	}
	void MediaMetadataEditor::apply()
	{
		__thiz.callMethod<void>(
			"apply",
			"()V"
		);
	}
	void MediaMetadataEditor::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject MediaMetadataEditor::getBitmap(jint arg0, android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jintArray MediaMetadataEditor::getEditableKeys()
	{
		return __thiz.callObjectMethod(
			"getEditableKeys",
			"()[I"
		).object<jintArray>();
	}
	jlong MediaMetadataEditor::getLong(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jobject MediaMetadataEditor::getObject(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jstring MediaMetadataEditor::getString(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(ILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	QAndroidJniObject MediaMetadataEditor::putBitmap(jint arg0, android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"putBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadataEditor::putLong(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(IJ)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadataEditor::putObject(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putObject",
			"(ILjava/lang/Object;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadataEditor::putString(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1
		);
	}
	void MediaMetadataEditor::removeEditableKeys()
	{
		__thiz.callMethod<void>(
			"removeEditableKeys",
			"()V"
		);
	}
} // namespace android::media

