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
		java::util::regex::Matcher appendReplacement(java::lang::StringBuffer arg0, JString arg1) const;
		java::util::regex::Matcher appendReplacement(java::lang::StringBuilder arg0, JString arg1) const;
		java::lang::StringBuffer appendTail(java::lang::StringBuffer arg0) const;
		java::lang::StringBuilder appendTail(java::lang::StringBuilder arg0) const;
		jint end() const;
		jint end(jint arg0) const;
		jint end(JString arg0) const;
		jboolean find() const;
		jboolean find(jint arg0) const;
		JString group() const;
		JString group(jint arg0) const;
		JString group(JString arg0) const;
		jint groupCount() const;
		jboolean hasAnchoringBounds() const;
		jboolean hasTransparentBounds() const;
		jboolean hitEnd() const;
		jboolean lookingAt() const;
		jboolean matches() const;
		java::util::regex::Pattern pattern() const;
		java::util::regex::Matcher region(jint arg0, jint arg1) const;
		jint regionEnd() const;
		jint regionStart() const;
		JString replaceAll(JString arg0) const;
		JString replaceAll(JObject arg0) const;
		JString replaceFirst(JString arg0) const;
		JString replaceFirst(JObject arg0) const;
		jboolean requireEnd() const;
		java::util::regex::Matcher reset() const;
		java::util::regex::Matcher reset(JString arg0) const;
		JObject results() const;
		jint start() const;
		jint start(jint arg0) const;
		jint start(JString arg0) const;
		JObject toMatchResult() const;
		JString toString() const;
		java::util::regex::Matcher useAnchoringBounds(jboolean arg0) const;
		java::util::regex::Matcher usePattern(java::util::regex::Pattern arg0) const;
		java::util::regex::Matcher useTransparentBounds(jboolean arg0) const;
	};
} // namespace java::util::regex

