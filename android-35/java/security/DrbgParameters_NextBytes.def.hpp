#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace java::security
{
	class DrbgParameters_NextBytes : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrbgParameters_NextBytes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrbgParameters_NextBytes(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getAdditionalInput() const;
		jboolean getPredictionResistance() const;
		jint getStrength() const;
	};
} // namespace java::security

