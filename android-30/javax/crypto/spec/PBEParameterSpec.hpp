#pragma once

#include "../../../JObject.hpp"

class JByteArray;

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
		PBEParameterSpec(JByteArray arg0, jint arg1);
		PBEParameterSpec(JByteArray arg0, jint arg1, JObject arg2);
		
		// Methods
		jint getIterationCount();
		JObject getParameterSpec();
		JByteArray getSalt();
	};
} // namespace javax::crypto::spec

