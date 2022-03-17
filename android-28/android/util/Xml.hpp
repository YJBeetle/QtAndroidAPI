#pragma once

#include "./Xml_Encoding.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/Reader.def.hpp"
#include "../../JString.hpp"
#include "./Xml.def.hpp"

namespace android::util
{
	// Fields
	inline JString Xml::FEATURE_RELAXED()
	{
		return getStaticObjectField(
			"android.util.Xml",
			"FEATURE_RELAXED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject Xml::asAttributeSet(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.util.Xml",
			"asAttributeSet",
			"(Lorg/xmlpull/v1/XmlPullParser;)Landroid/util/AttributeSet;",
			arg0.object()
		);
	}
	inline android::util::Xml_Encoding Xml::findEncodingByName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Xml",
			"findEncodingByName",
			"(Ljava/lang/String;)Landroid/util/Xml$Encoding;",
			arg0.object<jstring>()
		);
	}
	inline JObject Xml::newPullParser()
	{
		return callStaticObjectMethod(
			"android.util.Xml",
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;"
		);
	}
	inline JObject Xml::newSerializer()
	{
		return callStaticObjectMethod(
			"android.util.Xml",
			"newSerializer",
			"()Lorg/xmlpull/v1/XmlSerializer;"
		);
	}
	inline void Xml::parse(java::io::Reader arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/io/Reader;Lorg/xml/sax/ContentHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Xml::parse(JString arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/lang/String;Lorg/xml/sax/ContentHandler;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Xml::parse(java::io::InputStream arg0, android::util::Xml_Encoding arg1, JObject arg2)
	{
		callStaticMethod<void>(
			"android.util.Xml",
			"parse",
			"(Ljava/io/InputStream;Landroid/util/Xml$Encoding;Lorg/xml/sax/ContentHandler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::util

// Base class headers

