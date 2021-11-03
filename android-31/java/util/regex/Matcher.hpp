#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JString;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::lang
{
	class StringBuilder;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::util::regex
{
	class Matcher : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matcher(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JString quoteReplacement(JString arg0);
		java::util::regex::Matcher appendReplacement(java::lang::StringBuffer arg0, JString arg1);
		java::util::regex::Matcher appendReplacement(java::lang::StringBuilder arg0, JString arg1);
		java::lang::StringBuffer appendTail(java::lang::StringBuffer arg0);
		java::lang::StringBuilder appendTail(java::lang::StringBuilder arg0);
		jint end();
		jint end(jint arg0);
		jint end(JString arg0);
		jboolean find();
		jboolean find(jint arg0);
		JString group();
		JString group(jint arg0);
		JString group(JString arg0);
		jint groupCount();
		jboolean hasAnchoringBounds();
		jboolean hasTransparentBounds();
		jboolean hitEnd();
		jboolean lookingAt();
		jboolean matches();
		java::util::regex::Pattern pattern();
		java::util::regex::Matcher region(jint arg0, jint arg1);
		jint regionEnd();
		jint regionStart();
		JString replaceAll(JString arg0);
		JString replaceAll(JObject arg0);
		JString replaceFirst(JString arg0);
		JString replaceFirst(JObject arg0);
		jboolean requireEnd();
		java::util::regex::Matcher reset();
		java::util::regex::Matcher reset(JString arg0);
		JObject results();
		jint start();
		jint start(jint arg0);
		jint start(JString arg0);
		JObject toMatchResult();
		JString toString();
		java::util::regex::Matcher useAnchoringBounds(jboolean arg0);
		java::util::regex::Matcher usePattern(java::util::regex::Pattern arg0);
		java::util::regex::Matcher useTransparentBounds(jboolean arg0);
	};
} // namespace java::util::regex

