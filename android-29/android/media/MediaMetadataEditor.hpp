#pragma once

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
		void addEditableKey(jint arg0);
		void apply();
		void clear();
		QAndroidJniObject getBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1);
		jintArray getEditableKeys();
		jlong getLong(jint arg0, jlong arg1);
		jobject getObject(jint arg0, jobject arg1);
		jstring getString(jint arg0, jstring arg1);
		jstring getString(jint arg0, const QString &arg1);
		QAndroidJniObject putBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1);
		QAndroidJniObject putLong(jint arg0, jlong arg1);
		QAndroidJniObject putObject(jint arg0, jobject arg1);
		QAndroidJniObject putString(jint arg0, jstring arg1);
		QAndroidJniObject putString(jint arg0, const QString &arg1);
		void removeEditableKeys();
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
	
	// Constructors
	void MediaMetadataEditor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadataEditor",
			"(V)V");
	}
	
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
	QAndroidJniObject MediaMetadataEditor::getBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1)
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
	jstring MediaMetadataEditor::getString(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(ILjava/lang/String;)Ljava/lang/String;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject MediaMetadataEditor::putBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1)
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
	QAndroidJniObject MediaMetadataEditor::putString(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/MediaMetadataEditor;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void MediaMetadataEditor::removeEditableKeys()
	{
		__thiz.callMethod<void>(
			"removeEditableKeys",
			"()V"
		);
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

