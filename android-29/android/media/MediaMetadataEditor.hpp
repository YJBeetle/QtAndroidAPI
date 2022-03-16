#pragma once

#include "../../JIntArray.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaMetadataEditor.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaMetadataEditor::BITMAP_KEY_ARTWORK()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"BITMAP_KEY_ARTWORK"
		);
	}
	inline jint MediaMetadataEditor::RATING_KEY_BY_OTHERS()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_OTHERS"
		);
	}
	inline jint MediaMetadataEditor::RATING_KEY_BY_USER()
	{
		return getStaticField<jint>(
			"android.media.MediaMetadataEditor",
			"RATING_KEY_BY_USER"
		);
	}
	
	// Constructors
	
	// Methods
	inline void MediaMetadataEditor::addEditableKey(jint arg0) const
	{
		callMethod<void>(
			"addEditableKey",
			"(I)V",
			arg0
		);
	}
	inline void MediaMetadataEditor::apply() const
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
	inline void MediaMetadataEditor::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline android::graphics::Bitmap MediaMetadataEditor::getBitmap(jint arg0, android::graphics::Bitmap arg1) const
	{
		return callObjectMethod(
			"getBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0,
			arg1.object()
		);
	}
	inline JIntArray MediaMetadataEditor::getEditableKeys() const
	{
		return callObjectMethod(
			"getEditableKeys",
			"()[I"
		);
	}
	inline jlong MediaMetadataEditor::getLong(jint arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	inline JObject MediaMetadataEditor::getObject(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getObject",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline JString MediaMetadataEditor::getString(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"getString",
			"(ILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline android::media::MediaMetadataEditor MediaMetadataEditor::putBitmap(jint arg0, android::graphics::Bitmap arg1) const
	{
		return callObjectMethod(
			"putBitmap",
			"(ILandroid/graphics/Bitmap;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.object()
		);
	}
	inline android::media::MediaMetadataEditor MediaMetadataEditor::putLong(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"putLong",
			"(IJ)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1
		);
	}
	inline android::media::MediaMetadataEditor MediaMetadataEditor::putObject(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putObject",
			"(ILjava/lang/Object;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline android::media::MediaMetadataEditor MediaMetadataEditor::putString(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"putString",
			"(ILjava/lang/String;)Landroid/media/MediaMetadataEditor;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void MediaMetadataEditor::removeEditableKeys() const
	{
		callMethod<void>(
			"removeEditableKeys",
			"()V"
		);
	}
} // namespace android::media

// Base class headers

