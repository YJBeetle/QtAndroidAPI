#pragma once

#include "../../JObject.hpp"

class JArray;
class JString;

namespace android::net
{
	class UrlQuerySanitizer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UrlQuerySanitizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlQuerySanitizer(QAndroidJniObject obj);
		
		// Constructors
		UrlQuerySanitizer();
		UrlQuerySanitizer(JString arg0);
		
		// Methods
		static JObject getAllButNulAndAngleBracketsLegal();
		static JObject getAllButNulLegal();
		static JObject getAllButWhitespaceLegal();
		static JObject getAllIllegal();
		static JObject getAmpAndSpaceLegal();
		static JObject getAmpLegal();
		static JObject getSpaceLegal();
		static JObject getUrlAndSpaceLegal();
		static JObject getUrlLegal();
		jboolean getAllowUnregisteredParamaters() const;
		JObject getEffectiveValueSanitizer(JString arg0) const;
		JObject getParameterList() const;
		JObject getParameterSet() const;
		jboolean getPreferFirstRepeatedParameter() const;
		JObject getUnregisteredParameterValueSanitizer() const;
		JString getValue(JString arg0) const;
		JObject getValueSanitizer(JString arg0) const;
		jboolean hasParameter(JString arg0) const;
		void parseQuery(JString arg0) const;
		void parseUrl(JString arg0) const;
		void registerParameter(JString arg0, JObject arg1) const;
		void registerParameters(JArray arg0, JObject arg1) const;
		void setAllowUnregisteredParamaters(jboolean arg0) const;
		void setPreferFirstRepeatedParameter(jboolean arg0) const;
		void setUnregisteredParameterValueSanitizer(JObject arg0) const;
		JString unescape(JString arg0) const;
	};
} // namespace android::net

