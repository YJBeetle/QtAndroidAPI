#pragma once

#ifndef ANDROID_MEDIA_MEDIAMETADATAEDITOR
#define ANDROID_MEDIA_MEDIAMETADATAEDITOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::media
{
	class MediaMetadataEditor : public __JniBaseClass
	{
	public:
		// Fields
		static jint BITMAP_KEY_ARTWORK();
		static jint RATING_KEY_BY_OTHERS();
		static jint RATING_KEY_BY_USER();
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getLong(jint arg0, jlong arg1);
		QAndroidJniObject putLong(jint arg0, jlong arg1);
		void clear();
		void apply();
		QAndroidJniObject getObject(jint arg0, jobject arg1);
		QAndroidJniObject putObject(jint arg0, jobject arg1);
		QAndroidJniObject getString(jint arg0, jstring arg1);
		QAndroidJniObject putString(jint arg0, jstring arg1);
		QAndroidJniObject putBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1);
		void addEditableKey(jint arg0);
		void removeEditableKeys();
		QAndroidJniObject getEditableKeys();
		QAndroidJniObject getBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaMetadataEditor::BITMAP_KEY_ARTWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"BITMAP_KEY_ARTWORK");
	}
	jint MediaMetadataEditor::RATING_KEY_BY_OTHERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_OTHERS");
	}
	jint MediaMetadataEditor::RATING_KEY_BY_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_USER");
	}
	
	// Constructors
	void MediaMetadataEditor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadataEditor",
			"(V)V");
	}
	
	// Methods
	jlong MediaMetadataEditor::getLong(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(IJ)J",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadataEditor::putLong(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(IJ)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1);
	}
	void MediaMetadataEditor::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	void MediaMetadataEditor::apply()
	{
		__thiz.callMethod<void>(
			"apply",
			"()V");
	}
	QAndroidJniObject MediaMetadataEditor::getObject(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadataEditor::putObject(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putObject",
			"(ILjava/lang/Object;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadataEditor::getString(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(ILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadataEditor::putString(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaMetadataEditor::putBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"putBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.__jniObject().object());
	}
	void MediaMetadataEditor::addEditableKey(jint arg0)
	{
		__thiz.callMethod<void>(
			"addEditableKey",
			"(I)V",
			arg0);
	}
	void MediaMetadataEditor::removeEditableKeys()
	{
		__thiz.callMethod<void>(
			"removeEditableKeys",
			"()V");
	}
	QAndroidJniObject MediaMetadataEditor::getEditableKeys()
	{
		return __thiz.callObjectMethod(
			"getEditableKeys",
			"()[I");
	}
	QAndroidJniObject MediaMetadataEditor::getBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaMetadataEditor : public __jni_impl::android::media::MediaMetadataEditor
	{
	public:
		MediaMetadataEditor(QAndroidJniObject obj) { __thiz = obj; }
		MediaMetadataEditor()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAMETADATAEDITOR

