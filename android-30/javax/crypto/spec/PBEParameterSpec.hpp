#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace javax::crypto::spec
{
	class PBEParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PBEParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PBEParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		PBEParameterSpec(JByteArray arg0, jint arg1);
		PBEParameterSpec(JByteArray arg0, jint arg1, JObject arg2);
		
		// Methods
		jint getIterationCount() const;
		JObject getParameterSpec() const;
		JByteArray getSalt() const;
	};
} // namespace javax::crypto::spec

