#pragma once

#include "../../../JObject.hpp"


namespace javax::crypto::spec
{
	class PBEParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PBEParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PBEParameterSpec(QJniObject obj);
		
		// Constructors
		PBEParameterSpec(jbyteArray arg0, jint arg1);
		PBEParameterSpec(jbyteArray arg0, jint arg1, JObject arg2);
		
		// Methods
		jint getIterationCount();
		JObject getParameterSpec();
		jbyteArray getSalt();
	};
} // namespace javax::crypto::spec

