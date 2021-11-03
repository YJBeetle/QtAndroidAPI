#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace javax::crypto::spec
{
	class GCMParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GCMParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GCMParameterSpec(QJniObject obj);
		
		// Constructors
		GCMParameterSpec(jint arg0, JByteArray arg1);
		GCMParameterSpec(jint arg0, JByteArray arg1, jint arg2, jint arg3);
		
		// Methods
		JByteArray getIV() const;
		jint getTLen() const;
	};
} // namespace javax::crypto::spec

