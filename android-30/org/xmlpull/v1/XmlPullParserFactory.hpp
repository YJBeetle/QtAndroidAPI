#pragma once

#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/ArrayList.def.hpp"
#include "../../../java/util/HashMap.def.hpp"
#include "./XmlPullParserFactory.def.hpp"

namespace org::xmlpull::v1
{
	// Fields
	inline JString XmlPullParserFactory::PROPERTY_NAME()
	{
		return getStaticObjectField(
			"org.xmlpull.v1.XmlPullParserFactory",
			"PROPERTY_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline org::xmlpull::v1::XmlPullParserFactory XmlPullParserFactory::newInstance()
	{
		return callStaticObjectMethod(
			"org.xmlpull.v1.XmlPullParserFactory",
			"newInstance",
			"()Lorg/xmlpull/v1/XmlPullParserFactory;"
		);
	}
	inline org::xmlpull::v1::XmlPullParserFactory XmlPullParserFactory::newInstance(JString arg0, JClass arg1)
	{
		return callStaticObjectMethod(
			"org.xmlpull.v1.XmlPullParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/Class;)Lorg/xmlpull/v1/XmlPullParserFactory;",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		);
	}
	inline jboolean XmlPullParserFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean XmlPullParserFactory::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	inline jboolean XmlPullParserFactory::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	inline JObject XmlPullParserFactory::newPullParser() const
	{
		return callObjectMethod(
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;"
		);
	}
	inline JObject XmlPullParserFactory::newSerializer() const
	{
		return callObjectMethod(
			"newSerializer",
			"()Lorg/xmlpull/v1/XmlSerializer;"
		);
	}
	inline void XmlPullParserFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void XmlPullParserFactory::setNamespaceAware(jboolean arg0) const
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	inline void XmlPullParserFactory::setValidating(jboolean arg0) const
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
} // namespace org::xmlpull::v1

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xmlpull::v1;
#endif
