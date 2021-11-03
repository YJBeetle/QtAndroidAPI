#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
namespace java::util
{
	class Properties;
}

namespace javax::xml::transform
{
	class Transformer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Transformer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transformer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void clearParameters() const;
		JObject getErrorListener() const;
		java::util::Properties getOutputProperties() const;
		JString getOutputProperty(JString arg0) const;
		JObject getParameter(JString arg0) const;
		JObject getURIResolver() const;
		void reset() const;
		void setErrorListener(JObject arg0) const;
		void setOutputProperties(java::util::Properties arg0) const;
		void setOutputProperty(JString arg0, JString arg1) const;
		void setParameter(JString arg0, JObject arg1) const;
		void setURIResolver(JObject arg0) const;
		void transform(JObject arg0, JObject arg1) const;
	};
} // namespace javax::xml::transform

