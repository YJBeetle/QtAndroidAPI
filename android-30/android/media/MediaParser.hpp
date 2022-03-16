#pragma once

#include "../../JArray.hpp"
#include "./MediaFormat.def.hpp"
#include "./MediaParser_SeekPoint.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaParser.def.hpp"

namespace android::media
{
	// Fields
	inline JString MediaParser::PARAMETER_ADTS_ENABLE_CBR_SEEKING()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_ADTS_ENABLE_CBR_SEEKING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_AMR_ENABLE_CBR_SEEKING()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_AMR_ENABLE_CBR_SEEKING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_FLAC_DISABLE_ID3()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_FLAC_DISABLE_ID3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_MATROSKA_DISABLE_CUES_SEEKING()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_MATROSKA_DISABLE_CUES_SEEKING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_MP3_DISABLE_ID3()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_MP3_DISABLE_ID3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_MP3_ENABLE_CBR_SEEKING()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_MP3_ENABLE_CBR_SEEKING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_MP3_ENABLE_INDEX_SEEKING()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_MP3_ENABLE_INDEX_SEEKING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_MP4_IGNORE_EDIT_LISTS()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_MP4_IGNORE_EDIT_LISTS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_MP4_IGNORE_TFDT_BOX()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_MP4_IGNORE_TFDT_BOX",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_MP4_TREAT_VIDEO_FRAMES_AS_KEYFRAMES()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_MP4_TREAT_VIDEO_FRAMES_AS_KEYFRAMES",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_TS_ALLOW_NON_IDR_AVC_KEYFRAMES()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_TS_ALLOW_NON_IDR_AVC_KEYFRAMES",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_TS_DETECT_ACCESS_UNITS()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_TS_DETECT_ACCESS_UNITS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_TS_ENABLE_HDMV_DTS_AUDIO_STREAMS()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_TS_ENABLE_HDMV_DTS_AUDIO_STREAMS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_TS_IGNORE_AAC_STREAM()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_TS_IGNORE_AAC_STREAM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_TS_IGNORE_AVC_STREAM()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_TS_IGNORE_AVC_STREAM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_TS_IGNORE_SPLICE_INFO_STREAM()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_TS_IGNORE_SPLICE_INFO_STREAM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARAMETER_TS_MODE()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARAMETER_TS_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_AC3()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_AC3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_AC4()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_AC4",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_ADTS()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_ADTS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_AMR()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_AMR",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_FLAC()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_FLAC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_FLV()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_FLV",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_FMP4()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_FMP4",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_MATROSKA()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_MATROSKA",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_MP3()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_MP3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_MP4()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_MP4",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_OGG()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_OGG",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_PS()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_PS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_TS()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_TS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_UNKNOWN()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaParser::PARSER_NAME_WAV()
	{
		return getStaticObjectField(
			"android.media.MediaParser",
			"PARSER_NAME_WAV",
			"Ljava/lang/String;"
		);
	}
	inline jint MediaParser::SAMPLE_FLAG_DECODE_ONLY()
	{
		return getStaticField<jint>(
			"android.media.MediaParser",
			"SAMPLE_FLAG_DECODE_ONLY"
		);
	}
	inline jint MediaParser::SAMPLE_FLAG_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.media.MediaParser",
			"SAMPLE_FLAG_ENCRYPTED"
		);
	}
	inline jint MediaParser::SAMPLE_FLAG_HAS_SUPPLEMENTAL_DATA()
	{
		return getStaticField<jint>(
			"android.media.MediaParser",
			"SAMPLE_FLAG_HAS_SUPPLEMENTAL_DATA"
		);
	}
	inline jint MediaParser::SAMPLE_FLAG_KEY_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaParser",
			"SAMPLE_FLAG_KEY_FRAME"
		);
	}
	inline jint MediaParser::SAMPLE_FLAG_LAST_SAMPLE()
	{
		return getStaticField<jint>(
			"android.media.MediaParser",
			"SAMPLE_FLAG_LAST_SAMPLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::MediaParser MediaParser::create(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaParser",
			"create",
			"(Landroid/media/MediaParser$OutputConsumer;[Ljava/lang/String;)Landroid/media/MediaParser;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::media::MediaParser MediaParser::createByName(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaParser",
			"createByName",
			"(Ljava/lang/String;Landroid/media/MediaParser$OutputConsumer;)Landroid/media/MediaParser;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject MediaParser::getParserNames(android::media::MediaFormat arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaParser",
			"getParserNames",
			"(Landroid/media/MediaFormat;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jboolean MediaParser::advance(JObject arg0) const
	{
		return callMethod<jboolean>(
			"advance",
			"(Landroid/media/MediaParser$SeekableInputReader;)Z",
			arg0.object()
		);
	}
	inline JString MediaParser::getParserName() const
	{
		return callObjectMethod(
			"getParserName",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaParser::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaParser::seek(android::media::MediaParser_SeekPoint arg0) const
	{
		callMethod<void>(
			"seek",
			"(Landroid/media/MediaParser$SeekPoint;)V",
			arg0.object()
		);
	}
	inline android::media::MediaParser MediaParser::setParameter(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/media/MediaParser;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean MediaParser::supportsParameter(JString arg0) const
	{
		return callMethod<jboolean>(
			"supportsParameter",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::media

// Base class headers

