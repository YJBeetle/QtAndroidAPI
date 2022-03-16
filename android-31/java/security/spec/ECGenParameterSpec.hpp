#pragma once


class JString;

namespace java::security::spec
{
	class ECGenParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECGenParameterSpec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ECGenParameterSpec(JString arg0);
		
		// Methods
	};
} // namespace java::security::spec

