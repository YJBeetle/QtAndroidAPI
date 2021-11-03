#pragma once

#include "../../../JObject.hpp"

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
		static jstring quoteReplacement(jstring arg0);
		java::util::regex::Matcher appendReplacement(java::lang::StringBuffer arg0, jstring arg1);
		java::util::regex::Matcher appendReplacement(java::lang::StringBuilder arg0, jstring arg1);
		java::lang::StringBuffer appendTail(java::lang::StringBuffer arg0);
		java::lang::StringBuilder appendTail(java::lang::StringBuilder arg0);
		jint end();
		jint end(jint arg0);
		jint end(jstring arg0);
		jboolean find();
		jboolean find(jint arg0);
		jstring group();
		jstring group(jint arg0);
		jstring group(jstring arg0);
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
		jstring replaceAll(jstring arg0);
		jstring replaceAll(JObject arg0);
		jstring replaceFirst(jstring arg0);
		jstring replaceFirst(JObject arg0);
		jboolean requireEnd();
		java::util::regex::Matcher reset();
		java::util::regex::Matcher reset(jstring arg0);
		JObject results();
		jint start();
		jint start(jint arg0);
		jint start(jstring arg0);
		JObject toMatchResult();
		jstring toString();
		java::util::regex::Matcher useAnchoringBounds(jboolean arg0);
		java::util::regex::Matcher usePattern(java::util::regex::Pattern arg0);
		java::util::regex::Matcher useTransparentBounds(jboolean arg0);
	};
} // namespace java::util::regex

