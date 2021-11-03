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
		
		// QJniObject forward
		template<typename ...Ts> explicit Transformer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transformer(QJniObject obj);
		
		// Constructors
		
		// Methods
		void clearParameters();
		JObject getErrorListener();
		java::util::Properties getOutputProperties();
		JString getOutputProperty(JString arg0);
		JObject getParameter(JString arg0);
		JObject getURIResolver();
		void reset();
		void setErrorListener(JObject arg0);
		void setOutputProperties(java::util::Properties arg0);
		void setOutputProperty(JString arg0, JString arg1);
		void setParameter(JString arg0, JObject arg1);
		void setURIResolver(JObject arg0);
		void transform(JObject arg0, JObject arg1);
	};
} // namespace javax::xml::transform

