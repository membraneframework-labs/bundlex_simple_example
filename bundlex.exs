defmodule BundlexSimpleNif.BundlexProject do
  use Bundlex.Project

  def project do
    [
      natives: natives()
    ]
  end

  defp natives do
    [
      example: [
        sources: ["example.c"],
        interface: :nif
      ]
    ]
  end
end
