#pragma once

#include "../../../JObject.hpp"

namespace java::security::spec
{
	class DSAGenParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DSAGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DSAGenParameterSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DSAGenParameterSpec(jint arg0, jint arg1);
		DSAGenParameterSpec(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint getPrimePLength() const;
		jint getSeedLength() const;
		jint getSubprimeQLength() const;
	};
} // namespace java::security::spec

