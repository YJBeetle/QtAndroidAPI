#pragma once

#include "../../../JObject.hpp"


namespace java::security::spec
{
	class PSSParameterSpec : public JObject
	{
	public:
		// Fields
		static java::security::spec::PSSParameterSpec DEFAULT();
		static jint TRAILER_FIELD_BC();
		
		// QJniObject forward
		template<typename ...Ts> explicit PSSParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PSSParameterSpec(QJniObject obj);
		
		// Constructors
		PSSParameterSpec(jint arg0);
		PSSParameterSpec(jstring arg0, jstring arg1, JObject arg2, jint arg3, jint arg4);
		
		// Methods
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		JObject getMGFParameters();
		jint getSaltLength();
		jint getTrailerField();
		jstring toString();
	};
} // namespace java::security::spec

