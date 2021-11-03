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
		jboolean getAllowUnregisteredParamaters();
		JObject getEffectiveValueSanitizer(JString arg0);
		JObject getParameterList();
		JObject getParameterSet();
		jboolean getPreferFirstRepeatedParameter();
		JObject getUnregisteredParameterValueSanitizer();
		JString getValue(JString arg0);
		JObject getValueSanitizer(JString arg0);
		jboolean hasParameter(JString arg0);
		void parseQuery(JString arg0);
		void parseUrl(JString arg0);
		void registerParameter(JString arg0, JObject arg1);
		void registerParameters(JArray arg0, JObject arg1);
		void setAllowUnregisteredParamaters(jboolean arg0);
		void setPreferFirstRepeatedParameter(jboolean arg0);
		void setUnregisteredParameterValueSanitizer(JObject arg0);
		JString unescape(JString arg0);
	};
} // namespace android::net

