defmodule BundlexSimpleNif.Example do
  use Bundlex.Loader, nif: :example

  defnif add(a, b)
end
